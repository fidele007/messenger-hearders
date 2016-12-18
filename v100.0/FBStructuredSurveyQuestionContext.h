/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBStructuredSurveyAnswerSet;

@interface FBStructuredSurveyQuestionContext : NSObject {

	NSString* _questionID;
	NSString* _questionClass;
	unsigned long long _subquestionIndex;
	unsigned long long _questionNumber;
	unsigned long long _totalQuestionsInSurvey;
	FBStructuredSurveyAnswerSet* _answers;

}

@property (nonatomic,copy) NSString * questionID;                                    //@synthesize questionID=_questionID - In the implementation block
@property (nonatomic,copy) NSString * questionClass;                                 //@synthesize questionClass=_questionClass - In the implementation block
@property (assign,nonatomic) unsigned long long subquestionIndex;                    //@synthesize subquestionIndex=_subquestionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long questionNumber;                      //@synthesize questionNumber=_questionNumber - In the implementation block
@property (assign,nonatomic) unsigned long long totalQuestionsInSurvey;              //@synthesize totalQuestionsInSurvey=_totalQuestionsInSurvey - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyAnswerSet * answers;                  //@synthesize answers=_answers - In the implementation block
+(id)contextWithAnswers:(id)arg1 questionID:(id)arg2 questionClass:(id)arg3 subquestionIndex:(unsigned long long)arg4 questionNumber:(unsigned long long)arg5 totalQuestionsInSurvey:(unsigned long long)arg6 ;
-(unsigned long long)totalQuestionsInSurvey;
-(void)setTotalQuestionsInSurvey:(unsigned long long)arg1 ;
-(NSString *)questionClass;
-(NSString *)questionID;
-(unsigned long long)questionNumber;
-(unsigned long long)subquestionIndex;
-(void)setQuestionID:(NSString *)arg1 ;
-(void)setQuestionClass:(NSString *)arg1 ;
-(void)setSubquestionIndex:(unsigned long long)arg1 ;
-(void)setQuestionNumber:(unsigned long long)arg1 ;
-(FBStructuredSurveyAnswerSet *)answers;
-(void)setAnswers:(FBStructuredSurveyAnswerSet *)arg1 ;
@end

