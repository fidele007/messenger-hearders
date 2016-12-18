/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNetworkImageView.h>

@protocol FBAvatarProtocol;
@class FBMemModelObject;

@interface FBAvatarProfilePictureView : FBNetworkImageView {

	unsigned long long _imageSize;
	FBMemModelObject*<FBAvatarProtocol> _avatar;

}

@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar;              //@synthesize avatar=_avatar - In the implementation block
-(id)initWithImageSize:(unsigned long long)arg1 session:(id)arg2 ;
-(void)setAvatar:(id)arg1 withDefaultImage:(id)arg2 ;
-(void)_resetImage;
-(id)_avatarProfileURI;
-(void)setFrame:(CGRect)arg1 ;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
@end
