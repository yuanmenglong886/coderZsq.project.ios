//
//  SQTrainingMusclesWireframeInput.h
//  SQFitnessProgram_Viper
//
//  Created by 朱双泉 on 2019/2/25.
//  Copyright © 2019 Castie!. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SQViperWireframe.h"
#import "SQTrainingCapacityMuscleType.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SQTrainingMusclesWireframeInput <SQViperWireframe>

- (void)pushTrainingDateListWithType:(SQTrainingCapacityMuscleType)type;

@end

NS_ASSUME_NONNULL_END
