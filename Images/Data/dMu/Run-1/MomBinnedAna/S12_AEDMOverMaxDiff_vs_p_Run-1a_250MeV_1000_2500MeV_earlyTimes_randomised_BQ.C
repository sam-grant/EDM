void S12_AEDMOverMaxDiff_vs_p_Run-1a_250MeV_1000_2500MeV_earlyTimes_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:31:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(784.8888,-0.002161009,2704.438,0.007144317);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[11] = {
   455.9079,
   656.4016,
   884.7216,
   1127.839,
   1373.572,
   1620.391,
   1867.138,
   2116.328,
   2359.872,
   2607.389,
   2781.905};
   Double_t Graph0_fy1049[11] = {
   -0.0006767356,
   0.001479306,
   0.00553637,
   -0.0001637379,
   0.002545835,
   0.004034206,
   0.001989483,
   0.002724801,
   -0.001540037,
   0.002216184,
   0.004601088};
   Double_t Graph0_fex1049[11] = {
   0.2507604,
   0.174133,
   0.113895,
   0.1028479,
   0.09986165,
   0.109391,
   0.1309168,
   0.1631792,
   0.210211,
   0.2925523,
   0.478392};
   Double_t Graph0_fey1049[11] = {
   -0.0111728,
   0.003630054,
   0.002280011,
   -0.002013468,
   0.001982229,
   0.002168606,
   0.002592464,
   0.00321178,
   -0.0042155,
   0.006048243,
   0.02470928};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","S12",100,222.9845,3015.056);
   Graph_Graph01049->SetMinimum(-0.001230476);
   Graph_Graph01049->SetMaximum(0.006213785);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01049->GetXaxis()->SetRange(28,82);
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
