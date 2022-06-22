void S18_Momentum_Y_RMS_vs_p_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 21:16:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1394,10.81914,2704.191,25.77552);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1078[11] = {
   456.1488,
   653.8919,
   883.5254,
   1127.341,
   1373.07,
   1619.549,
   1866.692,
   2115.978,
   2359.682,
   2607.194,
   2781.755};
   Double_t Graph0_fy1078[11] = {
   14.20591,
   15.82058,
   17.07417,
   18.64505,
   19.83441,
   20.23402,
   19.80629,
   18.99206,
   17.41014,
   15.24292,
   13.6621};
   Double_t Graph0_fex1078[11] = {
   0.1558733,
   0.109756,
   0.07461652,
   0.06791802,
   0.06754704,
   0.07503288,
   0.09224771,
   0.1164614,
   0.1541804,
   0.210593,
   0.3609284};
   Double_t Graph0_fey1078[11] = {
   0.04950365,
   0.0180134,
   0.01270523,
   0.01239969,
   0.01327558,
   0.01508746,
   0.01801461,
   0.02184977,
   0.02678756,
   0.03349292,
   0.131488};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1078,Graph0_fy1078,Graph0_fex1078,Graph0_fey1078);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01078 = new TH1F("Graph_Graph01078","S18",100,223.3806,3014.729);
   Graph_Graph01078->SetMinimum(12.31478);
   Graph_Graph01078->SetMaximum(24.27988);
   Graph_Graph01078->SetDirectory(0);
   Graph_Graph01078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01078->SetLineColor(ci);
   Graph_Graph01078->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01078->GetXaxis()->SetRange(28,82);
   Graph_Graph01078->GetXaxis()->CenterTitle(true);
   Graph_Graph01078->GetXaxis()->SetLabelFont(42);
   Graph_Graph01078->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01078->GetXaxis()->SetTitleFont(42);
   Graph_Graph01078->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01078->GetYaxis()->CenterTitle(true);
   Graph_Graph01078->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01078->GetYaxis()->SetLabelFont(42);
   Graph_Graph01078->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01078->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01078->GetYaxis()->SetTitleFont(42);
   Graph_Graph01078->GetZaxis()->SetLabelFont(42);
   Graph_Graph01078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01078);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
