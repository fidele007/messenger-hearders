/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMMessageKey, UIColor;

@interface MNMessageCollapsingGroupViewModel : FBValueObject <NSCopying> {

	BOOL _isMessageGroupExpanded;
	NSString* _threadId;
	FBMMessageKey* _startingMessageKey;
	UIColor* _callToActionColor;

}

@property (nonatomic,readonly) BOOL isMessageGroupExpanded;                          //@synthesize isMessageGroupExpanded=_isMessageGroupExpanded - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadId;                             //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageKey * startingMessageKey;              //@synthesize startingMessageKey=_startingMessageKey - In the implementation block
@property (nonatomic,copy,readonly) UIColor * callToActionColor;                     //@synthesize callToActionColor=_callToActionColor - In the implementation block
-(id)initWithIsMessageGroupExpanded:(BOOL)arg1 threadId:(id)arg2 startingMessageKey:(id)arg3 callToActionColor:(id)arg4 ;
-(FBMMessageKey *)startingMessageKey;
-(BOOL)isMessageGroupExpanded;
-(UIColor *)callToActionColor;
-(NSString *)threadId;
@end
