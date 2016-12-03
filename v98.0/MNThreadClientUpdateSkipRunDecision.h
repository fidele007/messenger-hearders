/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNThreadClientUpdateSkipRunDecision : FBValueObject <NSCopying> {

	NSArray* _updatesToRun;
	NSArray* _updatesToSkip;

}

@property (nonatomic,copy,readonly) NSArray * updatesToRun;               //@synthesize updatesToRun=_updatesToRun - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updatesToSkip;              //@synthesize updatesToSkip=_updatesToSkip - In the implementation block
-(NSArray *)updatesToSkip;
-(NSArray *)updatesToRun;
-(id)initWithUpdatesToRun:(id)arg1 updatesToSkip:(id)arg2 ;
@end
