/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide;

@interface FBBylineBaseNodeMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) PAInterfaceGuide * interfaceGuide;                 //@synthesize interfaceGuide=_interfaceGuide - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* bylineTextMetrics; 
@property (nonatomic,readonly) FBTextMetrics* bylineLinkTextMetrics; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(PAInterfaceGuide *)interfaceGuide;
-(FBTextMetrics*)bylineTextMetrics;
-(FBTextMetrics*)bylineLinkTextMetrics;
@end

