/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQPEntity.h>

@class NSString, FBQPSocialContext, FBQPImage, FBQPAction;

@interface FBQPCreative : FBQPEntity {

	NSString* _title;
	NSString* _content;
	NSString* _footer;
	FBQPSocialContext* _socialContext;
	FBQPImage* _image;
	FBQPImage* _brandingImage;
	FBQPAction* _primaryAction;
	FBQPAction* _secondaryAction;
	FBQPAction* _dismissAction;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSString * footer;                                //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) FBQPSocialContext * socialContext;              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,retain) FBQPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) FBQPImage * brandingImage;                      //@synthesize brandingImage=_brandingImage - In the implementation block
@property (nonatomic,retain) FBQPAction * primaryAction;                     //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,retain) FBQPAction * secondaryAction;                   //@synthesize secondaryAction=_secondaryAction - In the implementation block
@property (nonatomic,retain) FBQPAction * dismissAction;                     //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)parseParameters:(id)arg1 ;
-(FBQPAction *)primaryAction;
-(FBQPAction *)secondaryAction;
-(FBQPSocialContext *)socialContext;
-(void)setSocialContext:(FBQPSocialContext *)arg1 ;
-(void)setPrimaryAction:(FBQPAction *)arg1 ;
-(void)setSecondaryAction:(FBQPAction *)arg1 ;
-(void)setBrandingImage:(FBQPImage *)arg1 ;
-(FBQPImage *)brandingImage;
-(id)copyWithParams;
-(void)setImage:(FBQPImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isValid;
-(NSString *)title;
-(FBQPImage *)image;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(FBQPAction *)dismissAction;
-(void)setDismissAction:(FBQPAction *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

