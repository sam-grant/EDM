void S18_AEDM_vs_p_Run-1a_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:11:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1467,-0.009732781,2704.186,0.06071518);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
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
   Double_t Graph0_fy1073[11] = {
   -0.09558394,
   0.03552808,
   0.03510919,
   0.03678827,
   -0.003865037,
   0.01409796,
   -0.002346379,
   0.0453841,
   0.005476801,
   0.002094717,
   0.07918681};
   Double_t Graph0_fex1073[11] = {
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
   Double_t Graph0_fey1073[11] = {
   0.2168425,
   0.05578257,
   0.02896134,
   0.02214264,
   0.01946176,
   0.01875638,
   0.01941034,
   0.02075084,
   0.02285542,
   0.02572327,
   0.09393056};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,223.3915,3014.722);
   Graph_Graph01073->SetMinimum(-0.002687985);
   Graph_Graph01073->SetMaximum(0.05367038);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(28,82);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
