void Y_ratio()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 27 11:18:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(0,0,1,1);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06205744,81.25,1.179091);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12S18_Y__1 = new TH1D("S12S18_Y__1","",24,-60,60);
   S12S18_Y__1->SetBinContent(4,0.01788041);
   S12S18_Y__1->SetBinContent(5,0.05373108);
   S12S18_Y__1->SetBinContent(6,0.1073948);
   S12S18_Y__1->SetBinContent(7,0.1974931);
   S12S18_Y__1->SetBinContent(8,0.333236);
   S12S18_Y__1->SetBinContent(9,0.5128937);
   S12S18_Y__1->SetBinContent(10,0.7221349);
   S12S18_Y__1->SetBinContent(11,0.893032);
   S12S18_Y__1->SetBinContent(12,0.9917337);
   S12S18_Y__1->SetBinContent(13,1);
   S12S18_Y__1->SetBinContent(14,0.8860461);
   S12S18_Y__1->SetBinContent(15,0.707871);
   S12S18_Y__1->SetBinContent(16,0.512714);
   S12S18_Y__1->SetBinContent(17,0.3274855);
   S12S18_Y__1->SetBinContent(18,0.190013);
   S12S18_Y__1->SetBinContent(19,0.1079563);
   S12S18_Y__1->SetBinContent(20,0.05069859);
   S12S18_Y__1->SetBinContent(21,0.01657756);
   S12S18_Y__1->SetBinError(4,0.0006337543);
   S12S18_Y__1->SetBinError(5,0.001098614);
   S12S18_Y__1->SetBinError(6,0.001553187);
   S12S18_Y__1->SetBinError(7,0.002106242);
   S12S18_Y__1->SetBinError(8,0.00273595);
   S12S18_Y__1->SetBinError(9,0.003394266);
   S12S18_Y__1->SetBinError(10,0.004027554);
   S12S18_Y__1->SetBinError(11,0.004478842);
   S12S18_Y__1->SetBinError(12,0.004719866);
   S12S18_Y__1->SetBinError(13,0.004739496);
   S12S18_Y__1->SetBinError(14,0.004461289);
   S12S18_Y__1->SetBinError(15,0.003987578);
   S12S18_Y__1->SetBinError(16,0.003393671);
   S12S18_Y__1->SetBinError(17,0.002712241);
   S12S18_Y__1->SetBinError(18,0.002065969);
   S12S18_Y__1->SetBinError(19,0.001557242);
   S12S18_Y__1->SetBinError(20,0.001067161);
   S12S18_Y__1->SetBinError(21,0.0006102286);
   S12S18_Y__1->SetEntries(339623);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1->SetLineColor(ci);
   S12S18_Y__1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12S18_Y__1->SetMarkerColor(ci);
   S12S18_Y__1->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12S18_Y__1->GetXaxis()->SetRange(0,25);
   S12S18_Y__1->GetXaxis()->SetLabelFont(42);
   S12S18_Y__1->GetXaxis()->SetTitleOffset(1);
   S12S18_Y__1->GetXaxis()->SetTitleFont(42);
   S12S18_Y__1->GetYaxis()->SetTitle("Normalised entries");
   S12S18_Y__1->GetYaxis()->CenterTitle(true);
   S12S18_Y__1->GetYaxis()->SetLabelFont(42);
   S12S18_Y__1->GetYaxis()->SetTitleFont(42);
   S12S18_Y__1->GetZaxis()->SetLabelFont(42);
   S12S18_Y__1->GetZaxis()->SetTitleOffset(1);
   S12S18_Y__1->GetZaxis()->SetTitleFont(42);
   S12S18_Y__1->Draw("AE");
   
   TH1D *Y__2 = new TH1D("Y__2","",24,-60,60);
   Y__2->SetBinContent(4,0.02843465);
   Y__2->SetBinContent(5,0.0744411);
   Y__2->SetBinContent(6,0.1391044);
   Y__2->SetBinContent(7,0.2349926);
   Y__2->SetBinContent(8,0.3726627);
   Y__2->SetBinContent(9,0.5515899);
   Y__2->SetBinContent(10,0.7456989);
   Y__2->SetBinContent(11,0.9088094);
   Y__2->SetBinContent(12,1);
   Y__2->SetBinContent(13,0.9995768);
   Y__2->SetBinContent(14,0.9083714);
   Y__2->SetBinContent(15,0.7450901);
   Y__2->SetBinContent(16,0.5509909);
   Y__2->SetBinContent(17,0.3721882);
   Y__2->SetBinContent(18,0.2347232);
   Y__2->SetBinContent(19,0.1388101);
   Y__2->SetBinContent(20,0.07429343);
   Y__2->SetBinContent(21,0.02837539);
   Y__2->SetBinError(4,6.085107e-05);
   Y__2->SetBinError(5,9.845794e-05);
   Y__2->SetBinError(6,0.0001345906);
   Y__2->SetBinError(7,0.0001749329);
   Y__2->SetBinError(8,0.0002202938);
   Y__2->SetBinError(9,0.0002680109);
   Y__2->SetBinError(10,0.0003116205);
   Y__2->SetBinError(11,0.0003440177);
   Y__2->SetBinError(12,0.0003608646);
   Y__2->SetBinError(13,0.0003607883);
   Y__2->SetBinError(14,0.0003439347);
   Y__2->SetBinError(15,0.0003114933);
   Y__2->SetBinError(16,0.0002678653);
   Y__2->SetBinError(17,0.0002201535);
   Y__2->SetBinError(18,0.0001748326);
   Y__2->SetBinError(19,0.0001344482);
   Y__2->SetBinError(20,9.836023e-05);
   Y__2->SetBinError(21,6.078764e-05);
   Y__2->SetEntries(6.226346e+07);

   ci = TColor::GetColor("#ff0000");
   Y__2->SetLineColor(ci);
   Y__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__2->SetMarkerColor(ci);
   Y__2->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__2->GetXaxis()->CenterTitle(true);
   Y__2->GetXaxis()->SetLabelFont(42);
   Y__2->GetXaxis()->SetTitleSize(0.04);
   Y__2->GetXaxis()->SetTitleOffset(1.1);
   Y__2->GetXaxis()->SetTitleFont(42);
   Y__2->GetYaxis()->SetTitle("Decays");
   Y__2->GetYaxis()->CenterTitle(true);
   Y__2->GetYaxis()->SetNdivisions(4000510);
   Y__2->GetYaxis()->SetLabelFont(42);
   Y__2->GetYaxis()->SetTitleSize(0.04);
   Y__2->GetYaxis()->SetTitleOffset(1.1);
   Y__2->GetYaxis()->SetTitleFont(42);
   Y__2->GetZaxis()->SetLabelFont(42);
   Y__2->GetZaxis()->SetTitleOffset(1);
   Y__2->GetZaxis()->SetTitleFont(42);
   Y__2->Draw("AEsame");
   upper_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-81.25,-0.5769231,81.25,1.346154);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3001[18] = {
   -42.5,
   -37.5,
   -32.5,
   -27.5,
   -22.5,
   -17.5,
   -12.5,
   -7.5,
   -2.5,
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5};
   Double_t _fy3001[18] = {
   0.6288247,
   0.7217931,
   0.7720444,
   0.8404228,
   0.8942027,
   0.929846,
   0.9684,
   0.9826395,
   0.9917337,
   1.000423,
   0.9754227,
   0.9500474,
   0.9305307,
   0.8798923,
   0.8095197,
   0.7777269,
   0.6824102,
   0.5842232};
   Double_t _felx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3001[18] = {
   0.02232396,
   0.01478796,
   0.01119019,
   0.008984647,
   0.007360545,
   0.006170121,
   0.005416156,
   0.004942248,
   0.004733397,
   0.004755215,
   0.00492515,
   0.005366496,
   0.00617576,
   0.007305761,
   0.00882218,
   0.01124338,
   0.01439145,
   0.02153702};
   Double_t _fehx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3001[18] = {
   0.02313101,
   0.01509411,
   0.01135358,
   0.009081221,
   0.007421386,
   0.006211202,
   0.005446534,
   0.004967168,
   0.004756043,
   0.004777872,
   0.004950082,
   0.005396896,
   0.006216885,
   0.007366676,
   0.008918857,
   0.01140712,
   0.01469823,
   0.02234609};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-65,65);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1.25);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetRange(1,100);
   Graph_Graph3001->GetXaxis()->CenterTitle(true);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3001->GetYaxis()->CenterTitle(true);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   p1->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-65,65,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.054976,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Normalised entries");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-65,65,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Decay y-position [mm]");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,1.25,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Ratio");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   p1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   p1->Modified();
   c->cd();
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Y","All decays","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S12S18_Y","Truth vertices","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
