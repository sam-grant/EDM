void S12_VerticalDecayPositionRatio_1750_2000_MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 14:35:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-81.25,-0.06305399,81.25,1.198026);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1D *S12_Y__1207 = new TH1D("S12_Y__1207","",24,-60,60);
   S12_Y__1207->SetBinContent(4,0.01568627);
   S12_Y__1207->SetBinContent(5,0.04139434);
   S12_Y__1207->SetBinContent(6,0.1002179);
   S12_Y__1207->SetBinContent(7,0.1877996);
   S12_Y__1207->SetBinContent(8,0.3455338);
   S12_Y__1207->SetBinContent(9,0.5028322);
   S12_Y__1207->SetBinContent(10,0.7224401);
   S12_Y__1207->SetBinContent(11,0.8875817);
   S12_Y__1207->SetBinContent(12,1);
   S12_Y__1207->SetBinContent(13,0.9472767);
   S12_Y__1207->SetBinContent(14,0.9063181);
   S12_Y__1207->SetBinContent(15,0.6832244);
   S12_Y__1207->SetBinContent(16,0.508061);
   S12_Y__1207->SetBinContent(17,0.3084967);
   S12_Y__1207->SetBinContent(18,0.1755991);
   S12_Y__1207->SetBinContent(19,0.09716776);
   S12_Y__1207->SetBinContent(20,0.04662309);
   S12_Y__1207->SetBinContent(21,0.01873638);
   S12_Y__1207->SetBinError(4,0.002614379);
   S12_Y__1207->SetBinError(5,0.004246969);
   S12_Y__1207->SetBinError(6,0.00660817);
   S12_Y__1207->SetBinError(7,0.009045987);
   S12_Y__1207->SetBinError(8,0.01227026);
   S12_Y__1207->SetBinError(9,0.01480199);
   S12_Y__1207->SetBinError(10,0.01774229);
   S12_Y__1207->SetBinError(11,0.01966585);
   S12_Y__1207->SetBinError(12,0.02087414);
   S12_Y__1207->SetBinError(13,0.02031642);
   S12_Y__1207->SetBinError(14,0.01987234);
   S12_Y__1207->SetBinError(15,0.01725402);
   S12_Y__1207->SetBinError(16,0.01487875);
   S12_Y__1207->SetBinError(17,0.01159402);
   S12_Y__1207->SetBinError(18,0.008747216);
   S12_Y__1207->SetBinError(19,0.006506834);
   S12_Y__1207->SetBinError(20,0.004507225);
   S12_Y__1207->SetBinError(21,0.002857272);
   S12_Y__1207->SetEntries(17201);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   S12_Y__1207->SetLineColor(ci);
   S12_Y__1207->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   S12_Y__1207->SetMarkerColor(ci);
   S12_Y__1207->GetXaxis()->SetTitle("Decay y-position [mm]");
   S12_Y__1207->GetXaxis()->SetRange(0,25);
   S12_Y__1207->GetXaxis()->SetLabelFont(42);
   S12_Y__1207->GetXaxis()->SetTitleOffset(1);
   S12_Y__1207->GetXaxis()->SetTitleFont(42);
   S12_Y__1207->GetYaxis()->SetTitle("Normalised entries");
   S12_Y__1207->GetYaxis()->CenterTitle(true);
   S12_Y__1207->GetYaxis()->SetLabelFont(42);
   S12_Y__1207->GetYaxis()->SetTitleFont(42);
   S12_Y__1207->GetZaxis()->SetLabelFont(42);
   S12_Y__1207->GetZaxis()->SetTitleOffset(1);
   S12_Y__1207->GetZaxis()->SetTitleFont(42);
   S12_Y__1207->Draw("AE");
   
   TH1D *Y__1208 = new TH1D("Y__1208","",24,-60,60);
   Y__1208->SetBinContent(4,0.0290397);
   Y__1208->SetBinContent(5,0.07485033);
   Y__1208->SetBinContent(6,0.1398381);
   Y__1208->SetBinContent(7,0.234835);
   Y__1208->SetBinContent(8,0.3732363);
   Y__1208->SetBinContent(9,0.5521931);
   Y__1208->SetBinContent(10,0.7479132);
   Y__1208->SetBinContent(11,0.9061507);
   Y__1208->SetBinContent(12,1);
   Y__1208->SetBinContent(13,0.9995364);
   Y__1208->SetBinContent(14,0.908099);
   Y__1208->SetBinContent(15,0.746622);
   Y__1208->SetBinContent(16,0.5516203);
   Y__1208->SetBinContent(17,0.3721328);
   Y__1208->SetBinContent(18,0.2360285);
   Y__1208->SetBinContent(19,0.1388017);
   Y__1208->SetBinContent(20,0.07413765);
   Y__1208->SetBinContent(21,0.02822932);
   Y__1208->SetBinError(4,0.0002358692);
   Y__1208->SetBinError(5,0.0003786797);
   Y__1208->SetBinError(6,0.0005175924);
   Y__1208->SetBinError(7,0.0006707436);
   Y__1208->SetBinError(8,0.0008456041);
   Y__1208->SetBinError(9,0.001028539);
   Y__1208->SetBinError(10,0.001197018);
   Y__1208->SetBinError(11,0.001317575);
   Y__1208->SetBinError(12,0.001384124);
   Y__1208->SetBinError(13,0.001383804);
   Y__1208->SetBinError(14,0.001318991);
   Y__1208->SetBinError(15,0.001195984);
   Y__1208->SetBinError(16,0.001028005);
   Y__1208->SetBinError(17,0.0008443531);
   Y__1208->SetBinError(18,0.000672446);
   Y__1208->SetBinError(19,0.0005156707);
   Y__1208->SetBinError(20,0.0003768726);
   Y__1208->SetBinError(21,0.0002325548);
   Y__1208->SetEntries(4234921);

   ci = TColor::GetColor("#ff0000");
   Y__1208->SetLineColor(ci);
   Y__1208->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   Y__1208->SetMarkerColor(ci);
   Y__1208->GetXaxis()->SetTitle("Decay y-position [mm]");
   Y__1208->GetXaxis()->CenterTitle(true);
   Y__1208->GetXaxis()->SetLabelFont(42);
   Y__1208->GetXaxis()->SetTitleSize(0.04);
   Y__1208->GetXaxis()->SetTitleOffset(1.1);
   Y__1208->GetXaxis()->SetTitleFont(42);
   Y__1208->GetYaxis()->SetTitle("Decays");
   Y__1208->GetYaxis()->CenterTitle(true);
   Y__1208->GetYaxis()->SetNdivisions(4000510);
   Y__1208->GetYaxis()->SetLabelFont(42);
   Y__1208->GetYaxis()->SetTitleSize(0.04);
   Y__1208->GetYaxis()->SetTitleOffset(1.1);
   Y__1208->GetYaxis()->SetTitleFont(42);
   Y__1208->GetZaxis()->SetLabelFont(42);
   Y__1208->GetZaxis()->SetTitleOffset(1);
   Y__1208->GetZaxis()->SetTitleFont(42);
   Y__1208->Draw("AEsame");
   upper_pad->Modified();
   c->cd();
  
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
   
   Double_t _fx3403[18] = {
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
   Double_t _fy3403[18] = {
   0.5401665,
   0.5530281,
   0.7166706,
   0.7997086,
   0.9257776,
   0.9106094,
   0.9659411,
   0.9795078,
   1,
   0.9477161,
   0.9980388,
   0.9150875,
   0.9210339,
   0.8289964,
   0.7439741,
   0.7000475,
   0.628872,
   0.6637206};
   Double_t _felx3403[18] = {
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
   Double_t _fely3403[18] = {
   0.0897111,
   0.05670758,
   0.04729553,
   0.03857316,
   0.03293515,
   0.02685551,
   0.02377028,
   0.02174751,
   0.02091844,
   0.02036656,
   0.02192963,
   0.0231534,
   0.02702346,
   0.03120488,
   0.03710502,
   0.04691522,
   0.06078333,
   0.100965};
   Double_t _fehx3403[18] = {
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
   Double_t _fehy3403[18] = {
   0.1060161,
   0.062845,
   0.05052537,
   0.04048046,
   0.03412838,
   0.02765954,
   0.02436262,
   0.02223585,
   0.02136071,
   0.02080905,
   0.0224169,
   0.02374683,
   0.02782831,
   0.03240236,
   0.03900372,
   0.05017055,
   0.06696442,
   0.1176381};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3403,_fy3403,_felx3403,_fehx3403,_fely3403,_fehy3403);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3403 = new TH1F("Graph_Graph3403","",100,-65,65);
   Graph_Graph3403->SetMinimum(0);
   Graph_Graph3403->SetMaximum(1.25);
   Graph_Graph3403->SetDirectory(0);
   Graph_Graph3403->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3403->SetLineColor(ci);
   Graph_Graph3403->GetXaxis()->SetRange(1,100);
   Graph_Graph3403->GetXaxis()->CenterTitle(true);
   Graph_Graph3403->GetXaxis()->SetLabelFont(42);
   Graph_Graph3403->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3403->GetXaxis()->SetTitleFont(42);
   Graph_Graph3403->GetYaxis()->SetTitle("Ratio");
   Graph_Graph3403->GetYaxis()->CenterTitle(true);
   Graph_Graph3403->GetYaxis()->SetLabelFont(42);
   Graph_Graph3403->GetYaxis()->SetTitleFont(42);
   Graph_Graph3403->GetZaxis()->SetLabelFont(42);
   Graph_Graph3403->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3403->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3403);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-65,0.7,65,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-65,1,65,1);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c->cd();
  
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
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.071918,510,"S");
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
   c->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   
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
   entry=leg->AddEntry("S12_Y","Truth vertices","lpf");
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
