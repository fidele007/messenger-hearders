/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISwitch.h>

@interface RCTSwitch : UISwitch {

	BOOL _wasOn;
	/*^block*/id _onChange;

}

@property (assign,nonatomic) BOOL wasOn;              //@synthesize wasOn=_wasOn - In the implementation block
@property (nonatomic,copy) id onChange;               //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(BOOL)wasOn;
-(void)setWasOn:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

