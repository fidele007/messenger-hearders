/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBPositionDescriptor;

@interface FBSizeConstraintDescriptor : NSObject {

	unsigned long long _constraintType;
	FBPositionDescriptor* _primaryConstrainingPosition;
	FBPositionDescriptor* _secondaryConstrainingPosition;

}

@property (assign,nonatomic) unsigned long long constraintType;                               //@synthesize constraintType=_constraintType - In the implementation block
@property (nonatomic,copy) FBPositionDescriptor * primaryConstrainingPosition;                //@synthesize primaryConstrainingPosition=_primaryConstrainingPosition - In the implementation block
@property (nonatomic,copy) FBPositionDescriptor * secondaryConstrainingPosition;              //@synthesize secondaryConstrainingPosition=_secondaryConstrainingPosition - In the implementation block
-(FBPositionDescriptor *)secondaryConstrainingPosition;
-(FBPositionDescriptor *)primaryConstrainingPosition;
-(void)setPrimaryConstrainingPosition:(FBPositionDescriptor *)arg1 ;
-(void)setSecondaryConstrainingPosition:(FBPositionDescriptor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)constraintType;
-(void)setConstraintType:(unsigned long long)arg1 ;
@end
