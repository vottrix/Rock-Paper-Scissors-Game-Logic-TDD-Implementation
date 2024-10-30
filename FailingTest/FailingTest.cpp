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
		
        //using AAA
        TEST_METHOD(TestPlayer1Wins)
        {
            //Arrange
            char player1[] = "Rock";
            char player2[] = "Scissors";

            //Act
            char* result = Determine_Winner(player1, player2);

            //Assert
            Assert::AreEqual("Player1", result, L"Expected 'Player1' when Player1 chooses Rock and Player2 chooses Scissors");
        }

	};
}
