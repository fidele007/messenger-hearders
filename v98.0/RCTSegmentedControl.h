/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UISegmentedControl.h>

@class NSArray;

@interface RCTSegmentedControl : UISegmentedControl {

	NSArray* _values;
	long long _selectedIndex;
	/*^block*/id _onChange;

}

@property (nonatomic,copy) NSArray * values;                       //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,copy) id onChange;                            //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(void)didChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
@end

