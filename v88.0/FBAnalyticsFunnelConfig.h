/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAnalyticsFunnelConfig : NSObject {

	BOOL _shouldEndOnBackgrounding;
	BOOL _usePreexistingFunnel;
	double _timeout;

}

@property (nonatomic,readonly) BOOL shouldEndOnBackgrounding;              //@synthesize shouldEndOnBackgrounding=_shouldEndOnBackgrounding - In the implementation block
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL usePreexistingFunnel;                  //@synthesize usePreexistingFunnel=_usePreexistingFunnel - In the implementation block
+(id)dictionaryToObject:(id)arg1 ;
-(id)initWithShouldEndOnBackgrounding:(BOOL)arg1 timeout:(double)arg2 ;
-(id)initWithShouldEndOnBackgrounding:(BOOL)arg1 timeout:(double)arg2 usePreexistingFunnel:(BOOL)arg3 ;
-(id)objectToDictionary;
-(BOOL)usePreexistingFunnel;
-(BOOL)shouldEndOnBackgrounding;
-(id)init;
-(double)timeout;
@end

