/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNViewModelSubscriptionAttributes : FBValueObject <NSCopying> {

	BOOL _shouldEnablePerfLogging;
	long long _importance;

}

@property (nonatomic,readonly) long long importance;                      //@synthesize importance=_importance - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnablePerfLogging;              //@synthesize shouldEnablePerfLogging=_shouldEnablePerfLogging - In the implementation block
-(id)initWithImportance:(long long)arg1 shouldEnablePerfLogging:(BOOL)arg2 ;
-(BOOL)shouldEnablePerfLogging;
-(long long)importance;
@end

