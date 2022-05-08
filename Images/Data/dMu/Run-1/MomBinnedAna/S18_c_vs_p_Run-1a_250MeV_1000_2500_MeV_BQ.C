void S18_c_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1467,-0.008352402,2704.186,0.03695073);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[11] = {
   456.1582,
   653.9005,
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205,
   2781.75};
   Double_t Graph0_fy1072[11] = {
   -0.1204791,
   -0.004864636,
   0.01183821,
   -0.002729332,
   -0.0004029939,
   0.004977177,
   -0.004840869,
   -7.59123e-05,
   0.01447085,
   0.02795422,
   0.02641959};
   Double_t Graph0_fex1072[11] = {
   0.1558516,
   0.1097482,
   0.07461565,
   0.06792102,
   0.06754761,
   0.07503672,
   0.09225336,
   0.1164617,
   0.154189,
   0.2106078,
   0.3609038};
   Double_t Graph0_fey1072[11] = {
   0.1538089,
   0.03944654,
   0.02048108,
   0.01563354,
   0.01372798,
   0.01326115,
   0.01378123,
   0.01490292,
   0.01673832,
   0.01964311,
   0.07488665};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S18",100,223.3915,3014.722);
   Graph_Graph01072->SetMinimum(-0.003822089);
   Graph_Graph01072->SetMaximum(0.03242042);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01072->GetXaxis()->SetRange(28,82);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
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
