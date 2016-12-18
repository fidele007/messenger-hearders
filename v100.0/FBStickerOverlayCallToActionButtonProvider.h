/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhotoCustomOverlayButtonProvider.h>

@protocol FBIntentHandler;
@class NSString, FBUserSession, NSDate, UIButton;

@interface FBStickerOverlayCallToActionButtonProvider : NSObject <FBPhotoCustomOverlayButtonProvider> {

	NSString* _stickerId;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	NSDate* _defaultExpirationTime;
	NSString* _categoryId;
	unsigned long long _ctaType;
	NSString* _title;
	NSString* _frameUri;
	NSString* _analyticsModule;
	NSString* _sourceMediaID;
	UIButton* _customOverlayButton;

}

@property (nonatomic,retain) UIButton * customOverlayButton;              //@synthesize customOverlayButton=_customOverlayButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)customOverlayButton;
-(void)_startProfilePictureUpdateFlow;
-(void)setCustomOverlayButton:(UIButton *)arg1 ;
-(id)initWithStickerId:(id)arg1 frameUri:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 defaultExpirationTime:(id)arg5 ctaType:(unsigned long long)arg6 sourceMediaID:(id)arg7 categoryId:(id)arg8 title:(id)arg9 analyticsModule:(id)arg10 ;
@end

