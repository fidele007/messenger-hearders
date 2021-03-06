/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBIntentHandler;
@class UILabel, FBWebImageView, FBUserSession, NSString;

@interface FBFeedPublisherBarComposerView : UIControl {

	UILabel* _prefilledLabel;
	FBWebImageView* _profilePicture;
	double _photoPadding;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	NSString* _composerSourceType;
	NSString* _composerContentOrigin;

}

@property (nonatomic,copy) NSString * composerSourceType;                 //@synthesize composerSourceType=_composerSourceType - In the implementation block
@property (nonatomic,copy) NSString * composerContentOrigin;              //@synthesize composerContentOrigin=_composerContentOrigin - In the implementation block
-(id)_createProfilePicture;
-(void)_didTapProfilePicture;
-(id)initWithPhotoPadding:(double)arg1 fillerText:(id)arg2 composerSourceType:(id)arg3 composerContentOrigin:(id)arg4 session:(id)arg5 intentHandler:(id)arg6 ;
-(void)updateProfilePictureURL:(id)arg1 ;
-(NSString *)composerSourceType;
-(void)setComposerSourceType:(NSString *)arg1 ;
-(NSString *)composerContentOrigin;
-(void)setComposerContentOrigin:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
@end

