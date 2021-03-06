/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBNativeArticleLoadRequest : NSObject {

	/*^block*/id _completionBlock;
	unsigned long long _preferredStyle;

}

@property (nonatomic,copy,readonly) id completionBlock;                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
+(id)loadRequestWithPreferredStyle:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPreferredStyle:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)completionBlock;
-(unsigned long long)preferredStyle;
@end

