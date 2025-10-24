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

        TEST_METHOD(TestPlayer1Wins_RockVsScissors)
        {
            const char* result = Determine_Winner("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(TestPlayer2Wins_PaperVsRock)
        {
            const char* result = Determine_Winner("Rock", "Paper");
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(TestDraw_ScissorsVsScissors)
        {
            const char* result = Determine_Winner("Scissors", "Scissors");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(TestInvalidInput_Player1Invalid)
        {
            const char* result = Determine_Winner("Lizard", "Rock");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestInvalidInput_Player2Invalid)
        {
            const char* result = Determine_Winner("Paper", "Spock");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestCaseInsensitive_Lowercase)
        {
            const char* result = Determine_Winner("rock", "scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(TestCaseInsensitive_Uppercase)
        {
            const char* result = Determine_Winner("PAPER", "ROCK");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(TestNullInput)
        {
            const char* result = Determine_Winner(nullptr, "Rock");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestAllWinConditions_Player1)
        {
            Assert::AreEqual("Player1", Determine_Winner("Rock", "Scissors"));
            Assert::AreEqual("Player1", Determine_Winner("Paper", "Rock"));
            Assert::AreEqual("Player1", Determine_Winner("Scissors", "Paper"));
        }

        TEST_METHOD(TestAllWinConditions_Player2)
        {
            Assert::AreEqual("Player2", Determine_Winner("Scissors", "Rock"));
            Assert::AreEqual("Player2", Determine_Winner("Rock", "Paper"));
            Assert::AreEqual("Player2", Determine_Winner("Paper", "Scissors"));
        }
    };
}
