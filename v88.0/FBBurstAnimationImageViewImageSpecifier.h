/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageSpecifier;
@class FBWebImageFocusPointLayout;

@interface FBBurstAnimationImageViewImageSpecifier : NSObject {

	id<FBWebImageSpecifier> _webImageSpecifier;
	FBWebImageFocusPointLayout* _focusPointLayout;

}

@property (nonatomic,retain) id<FBWebImageSpecifier> webImageSpecifier;                  //@synthesize webImageSpecifier=_webImageSpecifier - In the implementation block
@property (nonatomic,retain) FBWebImageFocusPointLayout * focusPointLayout;              //@synthesize focusPointLayout=_focusPointLayout - In the implementation block
-(void)setWebImageSpecifier:(id<FBWebImageSpecifier>)arg1 ;
-(id<FBWebImageSpecifier>)webImageSpecifier;
-(id)initWithWebImageSpecifier:(id)arg1 focusPoint:(id)arg2 ;
-(FBWebImageFocusPointLayout *)focusPointLayout;
-(void)setFocusPointLayout:(FBWebImageFocusPointLayout *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

