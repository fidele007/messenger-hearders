/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, NSAttributedString;

@interface FBQuickButtonState : NSObject <NSCopying> {

	unsigned long long _hash;
	NSString* _title;
	UIFont* _titleFont;
	NSAttributedString* _attributedTitle;
	CGSize _contentSize;
	CGSize _imageSize;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                              //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
-(BOOL)isEqualToButtonState:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)contentSize;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)imageSize;
-(NSAttributedString *)attributedTitle;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

