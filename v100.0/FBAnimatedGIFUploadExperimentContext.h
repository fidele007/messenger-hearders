/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBAnimatedGIFUploadExperimentContext : FBExperimentContext {

	BOOL _allowGifUpload;
	BOOL _shouldAutoplayGifsInMediaPicker;
	BOOL _allowGifsInComments;

}

@property (assign,nonatomic) BOOL allowGifUpload;                               //@synthesize allowGifUpload=_allowGifUpload - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoplayGifsInMediaPicker;              //@synthesize shouldAutoplayGifsInMediaPicker=_shouldAutoplayGifsInMediaPicker - In the implementation block
@property (assign,nonatomic) BOOL allowGifsInComments;                          //@synthesize allowGifsInComments=_allowGifsInComments - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowGifUpload;
-(BOOL)allowGifsInComments;
-(BOOL)shouldAutoplayGifsInMediaPicker;
-(void)setAllowGifUpload:(BOOL)arg1 ;
-(void)setShouldAutoplayGifsInMediaPicker:(BOOL)arg1 ;
-(void)setAllowGifsInComments:(BOOL)arg1 ;
@end

