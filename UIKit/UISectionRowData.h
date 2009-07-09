/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>


@interface UISectionRowData : NSObject <NSCopying> {
	BOOL _valid;
	float _headerHeight;
	float _footerHeight;
	float _headerOffset;
	float _footerOffset;
	int _numRows;
	int _arrayLength;
	float* _rowHeights;
	float* _rowOffsets;
	float _sectionHeight;
	BOOL _sectionOffsetValid;
	float _sectionOffset;
}
-(void)dealloc;
-(void)invalidate;
-(void)invalidateSectionOffset;
-(float)_headerOrFooterSizeForTable:(id)table title:(id)title isHeader:(BOOL)header;
-(void)addOffset:(float)offset fromRow:(int)row;
-(void)setHeight:(float)height forRow:(int)row;
-(float)_defaultSectionHeaderHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(float)_defaultSectionFooterHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)refreshWithSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)insertRowAtIndex:(int)index inSection:(int)section rowHeight:(float)height tableViewRowData:(id)data;
-(void)deleteRowAtIndex:(int)index;
-(int)sectionLocationForRow:(int)row;
-(int)sectionLocationForReorderedRow:(int)reorderedRow;
-(id)copyWithZone:(NSZone*)zone;
@end
