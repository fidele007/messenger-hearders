/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FRXSurveyArchitect <NSObject>
@property (nonatomic,readonly) long long totalQuestionsInSurvey; 
@property (nonatomic,readonly) long long pageCount; 
@required
-(void)cancelSurvey;
-(long long)totalQuestionsInSurvey;
-(id)getCurrentPage;
-(void)cancelSurveyByDismissMethod:(id)arg1;
-(id)startSurvey;
-(BOOL)processPageResults:(id)arg1;
-(void)submitSurvey;
-(long long)pageCount;

@end

