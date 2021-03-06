/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNAPNSMessageUserActionInfo : FBValueObject <NSCopying> {

	BOOL _isLaunchedByUser;
	BOOL _isColdStart;
	NSString* _actionIdentifier;
	NSDictionary* _responseInfo;

}

@property (nonatomic,copy,readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseInfo;              //@synthesize responseInfo=_responseInfo - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedByUser;                         //@synthesize isLaunchedByUser=_isLaunchedByUser - In the implementation block
@property (nonatomic,readonly) BOOL isColdStart;                              //@synthesize isColdStart=_isColdStart - In the implementation block
-(BOOL)isLaunchedByUser;
-(id)initWithActionIdentifier:(id)arg1 responseInfo:(id)arg2 isLaunchedByUser:(BOOL)arg3 isColdStart:(BOOL)arg4 ;
-(BOOL)isColdStart;
-(NSDictionary *)responseInfo;
-(NSString *)actionIdentifier;
@end

