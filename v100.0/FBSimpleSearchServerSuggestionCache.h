/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary;

@interface FBSimpleSearchServerSuggestionCache : NSObject {

	NSMutableDictionary* _suggestionCache;
	mutex _spinLock;
	BOOL _prefixMatchLastTokenOnly;
	/*^block*/id _suggestionTransformer;

}

@property (assign,nonatomic) BOOL prefixMatchLastTokenOnly;              //@synthesize prefixMatchLastTokenOnly=_prefixMatchLastTokenOnly - In the implementation block
@property (nonatomic,copy) id suggestionTransformer;                     //@synthesize suggestionTransformer=_suggestionTransformer - In the implementation block
-(void)setSuggestionTransformer:(id)arg1 ;
-(void)setPrefixMatchLastTokenOnly:(BOOL)arg1 ;
-(id)suggestionsForCanonicalQueryString:(id)arg1 numRequested:(unsigned long long)arg2 ;
-(void)cacheServerSuggestions:(id)arg1 forCanonicalQueryString:(id)arg2 ;
-(id)suggestionTransformer;
-(BOOL)prefixMatchLastTokenOnly;
-(id)init;
@end

