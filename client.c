#include <stdio.h>
#include <stdlib.h>

#define FRAME_SIZE 32
#define TIMEOUT 5000

// Function to simulate sending a frame from sender to receiver
void sendFrame(char *frame) {
    printf("Sent frame: %s\n", frame);
}

// Function to simulate receiving a frame at the receiver side
char* receiveFrame() {
    char *frame = (char*) malloc(FRAME_SIZE * sizeof(char));
    printf("Enter received frame: ");
    scanf("%s", frame);
    return frame;
}

int main() {
    // Get user-defined input for number of frames to send
    int numFrames;
    printf("Enter number of frames to send: ");
    scanf("%d", &numFrames);

    // Initialize variables
    int expectedAckNumber = 0;
    int nextFrameToSend = 0;

    // Loop through all frames to send
    while (nextFrameToSend < numFrames) {
        // Create and send frame
        char frame[FRAME_SIZE];
        sprintf(frame, "Frame %d", nextFrameToSend);
        sendFrame(frame);

        // Start timer for timeout
        int timer = TIMEOUT;

        // Loop until either the expected ACK is received or timeout occurs
        while (timer > 0) {
            // Receive frame from receiver
            char *receivedFrame = receiveFrame();

            // If received frame contains expected ACK, break out of loop
            if (atoi(receivedFrame) == expectedAckNumber) {
                printf("Received ACK: %d\n", expectedAckNumber);

                // Increment expected ACK number and next frame to send
                expectedAckNumber++;
                nextFrameToSend++;

                // Free memory allocated for received frame
                free(receivedFrame);
                break;
            }

            // If timeout occurs, resend the frame
            timer -= 1000;
            if (timer <= 0) {
                printf("Timeout occurred. Resending frame: %s\n", frame);
                break;
            }

            // Free memory allocated for received frame
            free(receivedFrame);
        }

        // If timeout occurred and ACK was not received, print data loss message
        if (timer <= 0) {
            printf("Data loss: Frame %d\n", nextFrameToSend);
        }
    }

    return 0;
}
