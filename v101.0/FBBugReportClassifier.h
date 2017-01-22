/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBBugReportClassifier : NSObject {

	long long _chosenCategory;
	NSString* _attachmentFilename;
	NSString* _rule;
	NSString* _contents;

}
-(id)initiationSourceToProductAreaRules;
-(void)determineProductAreaMatchWithRuleSet:(id)arg1 contents:(id)arg2 attachmentFilename:(id)arg3 ;
-(id)windowRecursiveDescriptionToProductAreaRules;
-(id)descriptionToProductAreaRules;
-(id)instantArticlesToProductAreaRules;
-(id)placeTipsToProductAreaRules;
-(id)productAreaAsString:(long long)arg1 ;
-(id)productAreaByClassifierWithInitiationSource:(unsigned long long)arg1 description:(id)arg2 attachments:(id)arg3 ;
-(id)init;
@end
