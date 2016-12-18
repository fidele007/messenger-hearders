/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBWebRTCSurveyOption, FBWebRTCEndCallInfo, NSString;

@interface FBWebRTCCallSurvey : NSObject {

	BOOL _useVideoOptions;
	NSArray* _audioSurveyOptions;
	NSArray* _videoSurveyOptions;
	FBWebRTCSurveyOption* _additionalFeedbackOption;
	FBWebRTCEndCallInfo* _endCallInfo;
	FBWebRTCSurveyOption* _selectedOption;
	NSString* _title;
	NSString* _additionalFeedback;

}

@property (nonatomic,copy) NSString * additionalFeedback;                                    //@synthesize additionalFeedback=_additionalFeedback - In the implementation block
@property (assign,nonatomic) BOOL useVideoOptions;                                           //@synthesize useVideoOptions=_useVideoOptions - In the implementation block
@property (nonatomic,retain) FBWebRTCEndCallInfo * endCallInfo;                              //@synthesize endCallInfo=_endCallInfo - In the implementation block
@property (nonatomic,retain) FBWebRTCSurveyOption * selectedOption;                          //@synthesize selectedOption=_selectedOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSurveyOptions;                            //@synthesize audioSurveyOptions=_audioSurveyOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoSurveyOptions;                            //@synthesize videoSurveyOptions=_videoSurveyOptions - In the implementation block
@property (nonatomic,readonly) FBWebRTCSurveyOption * additionalFeedbackOption;              //@synthesize additionalFeedbackOption=_additionalFeedbackOption - In the implementation block
@property (nonatomic,readonly) BOOL hasMadeSelection; 
-(void)setAdditionalFeedback:(NSString *)arg1 ;
-(FBWebRTCEndCallInfo *)endCallInfo;
-(BOOL)_hasProvidedFeedback;
-(NSString *)additionalFeedback;
-(void)_insertSurveyOptionIntoArray:(id)arg1 withContent:(id)arg2 andKey:(id)arg3 ;
-(void)cancelSurvey;
-(BOOL)hasMadeSelection;
-(NSArray *)audioSurveyOptions;
-(NSArray *)videoSurveyOptions;
-(FBWebRTCSurveyOption *)additionalFeedbackOption;
-(BOOL)useVideoOptions;
-(void)setUseVideoOptions:(BOOL)arg1 ;
-(void)setEndCallInfo:(FBWebRTCEndCallInfo *)arg1 ;
-(void)submit;
-(id)init;
-(NSString *)title;
-(FBWebRTCSurveyOption *)selectedOption;
-(void)setSelectedOption:(FBWebRTCSurveyOption *)arg1 ;
@end

