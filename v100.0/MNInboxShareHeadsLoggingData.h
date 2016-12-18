/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNInboxShareHeadsLoggingData : FBValueObject <NSCopying> {

	NSString* _userId;
	NSString* _unitId;
	NSString* _clickTarget;

}

@property (nonatomic,copy,readonly) NSString * userId;                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitId;                   //@synthesize unitId=_unitId - In the implementation block
@property (nonatomic,copy,readonly) NSString * clickTarget;              //@synthesize clickTarget=_clickTarget - In the implementation block
-(NSString *)unitId;
-(NSString *)clickTarget;
-(id)initWithUserId:(id)arg1 unitId:(id)arg2 clickTarget:(id)arg3 ;
-(NSString *)userId;
@end

