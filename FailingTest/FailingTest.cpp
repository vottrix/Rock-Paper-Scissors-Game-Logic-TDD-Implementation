#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
#include "../CSCN71020_Assign3/gameLogic.h"
}

namespace FailingTest
{
    TEST_CLASS(FailingTest)
    {
    public:

        //a test case for Player1 winning with rock versus scissors !
        TEST_METHOD(TestPlayer1Wins_RockVsScissors)
        {
            char player1[] = "Rock";
            char player2[] = "Scissors";
            char* result = Determine_Winner(player1, player2);
            Assert::AreEqual("Player1", result, L"Expected ''Player1'' when Player1 chooses Rock and Player2 chooses Scissors");
        }

        //a test case for Player2 winning with paper versus rock !
        TEST_METHOD(TestPlayer2Wins_PaperVsRock)
        {
            char player1[] = "Rock";
            char player2[] = "Paper";
            char* result = Determine_Winner(player1, player2);
            Assert::AreEqual("Player2", result, L"Expected ''Player2'' when Player2 chooses Paper and Player1 chooses Rock");
        }

        //a test case for a Draw with both players choosing scissors !
        TEST_METHOD(TestDraw_ScissorsVsScissors)
        {
            char player1[] = "Scissors";
            char player2[] = "Scissors";
            char* result = Determine_Winner(player1, player2);
            Assert::AreEqual("Draw", result, L"Expected ''Draw'' when both players choose Scissors");
        }

        //a test case for invalid input when Player1 enters an invalid choice
        TEST_METHOD(TestInvalidInput_Player1Invalid)
        {
            char player1[] = "Lizard";
            char player2[] = "Rock";
            char* result = Determine_Winner(player1, player2);
            Assert::AreEqual("Invalid", result, L"Expected ''Invalid'' when Player1 enters an invalid choice");
        }

        //a test case for invalid input when Player2 enters an invalid choice
        TEST_METHOD(TestInvalidInput_Player2Invalid)
        {
            char player1[] = "Paper";
            char player2[] = "Spock";
            char* result = Determine_Winner(player1, player2);
            Assert::AreEqual("Invalid", result, L"Expected ''Invalid'' when Player2 enters an invalid choice");
        }
    };
}
