//
//  SQTrainingDateListInteractorInput.h
//  SQFitnessProgram_Viper
//
//  Created by 朱双泉 on 2019/2/26.
//  Copyright © 2019 Castie!. All rights reserved.
//

#import "SQViperInteractor.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SQTrainingDateListInteractorInput <NSObject, SQViperInteractor>

- (void)loadDataSource;

- (NSArray *)fetchDataSource;

@end

NS_ASSUME_NONNULL_END
