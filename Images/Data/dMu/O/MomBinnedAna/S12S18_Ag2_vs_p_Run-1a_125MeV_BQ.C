void S12S18_Ag2_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.0919,-4.056367,2722.725,9.409531);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[22] = {
   366.527,
   456.9203,
   570.3862,
   694.8805,
   815.7921,
   938.4824,
   1062.719,
   1188.249,
   1312.672,
   1435.845,
   1561.892,
   1685.198,
   1810.535,
   1935.1,
   2060.262,
   2184.913,
   2309.266,
   2433.214,
   2559.661,
   2678.463,
   2781.183,
   2885.477};
   Double_t Graph0_fy1035[22] = {
   0.7219221,
   0.1493647,
   0.2170021,
   0.0723309,
   0.03455484,
   0.0190882,
   0.005146727,
   0.06582296,
   -6.728306e-05,
   0.07237125,
   -0.05701154,
   0.02266005,
   0.01185608,
   -0.007952864,
   0.02661633,
   0.0268318,
   0.009025406,
   -0.0378582,
   0.01541737,
   -0.05499094,
   0.111901,
   3.594212};
   Double_t Graph0_fex1035[22] = {
   0.2524909,
   0.1193767,
   0.07933758,
   0.05425657,
   0.04376901,
   0.03958789,
   0.03749271,
   0.0363428,
   0.03689421,
   0.03715758,
   0.03988764,
   0.04210239,
   0.0474701,
   0.05192563,
   0.05956382,
   0.06572964,
   0.07590341,
   0.09128271,
   0.108535,
   0.1244842,
   0.2556156,
   1.064898};
   Double_t Graph0_fey1035[22] = {
   2.533972,
   0.224906,
   0.1094731,
   0.06591831,
   0.04579852,
   0.03757009,
   0.03304379,
   0.02989574,
   0.02808008,
   0.02664159,
   0.02662491,
   0.02578362,
   0.02667834,
   0.02689129,
   0.02818432,
   0.02851761,
   0.03004673,
   0.03235531,
   0.03395509,
   0.03685335,
   0.08878906,
   3.571002};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S12S18",100,114.2477,3138.569);
   Graph_Graph01035->SetMinimum(-2.709777);
   Graph_Graph01035->SetMaximum(8.062941);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(22,79);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
