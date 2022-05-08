void S12_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8407,11.77174,3380.646,23.27407);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[11] = {
   451.9126,
   653.3908,
   880.2869,
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647,
   2614.196,
   2791.847};
   Double_t Graph0_fy1102[11] = {
   14.03971,
   16.63914,
   18.53132,
   20.05218,
   20.99002,
   21.34283,
   21.14931,
   20.25865,
   18.64733,
   16.20706,
   13.75051};
   Double_t Graph0_fex1102[11] = {
   0.09610043,
   0.08121317,
   0.05878774,
   0.05741996,
   0.06114729,
   0.0675111,
   0.07880324,
   0.09848086,
   0.1287351,
   0.1585905,
   0.2246814};
   Double_t Graph0_fey1102[11] = {
   0.02885215,
   0.01388297,
   0.01077188,
   0.01131421,
   0.01261579,
   0.01419221,
   0.01642841,
   0.01965624,
   0.02366534,
   0.02604183,
   0.06171176};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S12_",100,217.791,3026.097);
   Graph_Graph01102->SetMinimum(12.92198);
   Graph_Graph01102->SetMaximum(22.12384);
   Graph_Graph01102->SetDirectory(0);
   Graph_Graph01102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01102->SetLineColor(ci);
   Graph_Graph01102->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01102->GetXaxis()->SetRange(0,100);
   Graph_Graph01102->GetXaxis()->CenterTitle(true);
   Graph_Graph01102->GetXaxis()->SetLabelFont(42);
   Graph_Graph01102->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01102->GetXaxis()->SetTitleFont(42);
   Graph_Graph01102->GetYaxis()->CenterTitle(true);
   Graph_Graph01102->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01102->GetYaxis()->SetLabelFont(42);
   Graph_Graph01102->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01102->GetYaxis()->SetTitleFont(42);
   Graph_Graph01102->GetZaxis()->SetLabelFont(42);
   Graph_Graph01102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01102);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
