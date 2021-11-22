void S0_Momentum_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:11:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.4822,3.718118,3337.749,26.63442);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[12] = {
   177.4115,
   433.2224,
   628.2925,
   872.9432,
   1121.61,
   1371.594,
   1620.437,
   1869.063,
   2118.037,
   2364.149,
   2613.535,
   2828.661};
   Double_t Graph0_fy1043[12] = {
   7.627518,
   14.57207,
   17.44364,
   19.99171,
   21.65745,
   22.51927,
   22.79683,
   22.44248,
   21.66642,
   20.03988,
   17.23745,
   13.53929};
   Double_t Graph0_fex1043[12] = {
   0.731188,
   0.06993383,
   0.06316248,
   0.06372699,
   0.06826331,
   0.07385007,
   0.08136207,
   0.09223897,
   0.1074681,
   0.131593,
   0.1737833,
   0.20897};
   Double_t Graph0_fey1043[12] = {
   0.09001628,
   0.01515643,
   0.01092526,
   0.01250937,
   0.01451141,
   0.01632766,
   0.01820768,
   0.02035595,
   0.02294597,
   0.02614698,
   0.02962357,
   0.03739423};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","S0_",100,0,3094.089);
   Graph_Graph01043->SetMinimum(6.009749);
   Graph_Graph01043->SetMaximum(24.34279);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01043->GetXaxis()->SetRange(2,96);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
