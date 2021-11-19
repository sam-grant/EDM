void S12S18_eAEDM_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:58:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.0919,-0.3619389,2722.725,3.518662);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[22] = {
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
   Double_t Graph0_fy1040[22] = {
   2.84864,
   0.2527333,
   0.1227242,
   0.07430517,
   0.05140274,
   0.04217002,
   0.03712553,
   0.03359376,
   0.03153741,
   0.02994036,
   0.02994964,
   0.02902356,
   0.03005956,
   0.03024085,
   0.03178609,
   0.03226296,
   0.03367309,
   0.03623494,
   0.03822248,
   0.04141765,
   0.1018738,
   2.652486};
   Double_t Graph0_fex1040[22] = {
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
   Double_t Graph0_fey1040[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12S18",100,114.2477,3138.569);
   Graph_Graph01040->SetMinimum(0.0261212);
   Graph_Graph01040->SetMaximum(3.130602);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(22,79);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
