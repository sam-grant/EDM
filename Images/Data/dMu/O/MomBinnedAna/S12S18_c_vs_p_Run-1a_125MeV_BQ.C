void S12S18_c_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 19:14:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.0919,-3.128282,2722.725,6.377538);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[22] = {
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
   Double_t Graph0_fy1033[22] = {
   0.4898389,
   0.03711342,
   0.223566,
   0.0584324,
   -0.0299956,
   0.001207349,
   0.02988612,
   0.005171242,
   0.01884913,
   0.06177607,
   0.007170007,
   0.02720164,
   0.05078925,
   0.01217441,
   0.01652811,
   -0.01430998,
   0.02677086,
   -0.01973823,
   0.02641257,
   -0.01449592,
   -0.0151744,
   2.475051};
   Double_t Graph0_fex1033[22] = {
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
   Double_t Graph0_fey1033[22] = {
   2.033817,
   0.1769771,
   0.08607354,
   0.051956,
   0.0360066,
   0.02951448,
   0.02599893,
   0.02350789,
   0.0220755,
   0.02096749,
   0.02096388,
   0.0203201,
   0.02099636,
   0.02114508,
   0.02221122,
   0.02245803,
   0.02365529,
   0.02539269,
   0.02681874,
   0.02909659,
   0.07141813,
   2.318184};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","S12S18",100,114.2477,3138.569);
   Graph_Graph01033->SetMinimum(-2.1777);
   Graph_Graph01033->SetMaximum(5.426956);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01033->GetXaxis()->SetRange(22,79);
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
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
