/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSAttributedString, UIColor, UIImage;

@interface FBQuickButtonStateContents : NSObject {

	NSString* _title;
	NSAttributedString* _attributedTitle;
	UIColor* _titleColor;
	UIColor* _titleShadowColor;
	UIImage* _image;
	UIImage* _backgroundImage;
	FBQuickButtonStateContents* _derivedContents;

}

@property (nonatomic,retain) FBQuickButtonStateContents * derivedContents;              //@synthesize derivedContents=_derivedContents - In the implementation block
@property (nonatomic,copy) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                        //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                      //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * titleShadowColor;                                //@synthesize titleShadowColor=_titleShadowColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
+(id)stateContentsWithDerivedContents:(id)arg1 ;
-(void)setTitleShadowColor:(UIColor *)arg1 ;
-(UIColor *)titleShadowColor;
-(id)drawWithBoundingRect:(CGRect)arg1 font:(id)arg2 ;
-(void)setDerivedContents:(FBQuickButtonStateContents *)arg1 ;
-(FBQuickButtonStateContents *)derivedContents;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(NSAttributedString *)attributedTitle;
@end
