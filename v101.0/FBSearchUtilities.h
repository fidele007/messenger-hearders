/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBSearchUtilities : NSObject
+(id)normalizeSemantic:(id)arg1 myFBID:(id)arg2 ;
+(id)getGrammarTypeFromEntityAvatar:(id)arg1 ;
+(id)_dedupeMe:(id)arg1 myFBID:(id)arg2 ;
+(id)_shredFragments:(id)arg1 ;
+(id)_structuredTextToUniqueString:(id)arg1 ;
+(id)splitResultString:(id)arg1 includeSpace:(BOOL)arg2 pairQuote:(BOOL)arg3 ;
+(id)_getGrammarTypeFromEntityObject:(id)arg1 ;
+(id)handleTextDeleteAt:(NSRange)arg1 existingStructuredText:(id)arg2 ;
+(id)handleTextAddAt:(unsigned long long)arg1 text:(id)arg2 existingStructuredText:(id)arg3 ;
+(BOOL)structuredText:(id)arg1 isEqualToStructuredText:(id)arg2 ;
+(id)getGrammarTypeFromEntityModelObject:(id)arg1 ;
@end

