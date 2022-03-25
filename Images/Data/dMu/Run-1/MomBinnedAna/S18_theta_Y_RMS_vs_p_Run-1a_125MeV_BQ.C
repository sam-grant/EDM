void S18_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0181,0.7562268,3028.101,32.51806);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[22] = {
   366.5718,
   457.0815,
   570.2768,
   694.4958,
   815.6467,
   938.5005,
   1062.783,
   1188.162,
   1312.628,
   1435.781,
   1561.988,
   1685.031,
   1810.405,
   1935.059,
   2060.338,
   2184.726,
   2309.137,
   2433.452,
   2559.776,
   2678.028,
   2781.271,
   2884.595};
   Double_t Graph0_fy1120[22] = {
   34.78687,
   31.06869,
   26.51422,
   23.30034,
   20.32876,
   18.66644,
   17.21707,
   16.02496,
   14.98092,
   13.99309,
   13.08152,
   11.93744,
   11.04976,
   10.14535,
   9.347395,
   8.562813,
   7.738268,
   6.894086,
   6.145242,
   5.4297,
   4.909102,
   5.146297};
   Double_t Graph0_fex1120[22] = {
   0.3072112,
   0.1507727,
   0.09980393,
   0.06933791,
   0.05635711,
   0.05117529,
   0.04849768,
   0.04705172,
   0.04807911,
   0.04855352,
   0.05210895,
   0.05537262,
   0.06271132,
   0.06865787,
   0.0791007,
   0.08736164,
   0.1013737,
   0.1229507,
   0.144539,
   0.1658783,
   0.3496264,
   1.155309};
   Double_t Graph0_fey1120[22] = {
   1.200261,
   0.1088676,
   0.05281236,
   0.0323347,
   0.02261321,
   0.01868513,
   0.01643876,
   0.01485121,
   0.01405016,
   0.01336775,
   0.01336956,
   0.0130126,
   0.01357038,
   0.01373202,
   0.01446456,
   0.01472914,
   0.01545701,
   0.01663618,
   0.0174478,
   0.01883837,
   0.04735199,
   0.7277963};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","S18",100,114.316,3137.699);
   Graph_Graph01120->SetMinimum(3.93241);
   Graph_Graph01120->SetMaximum(29.34188);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01120->GetXaxis()->SetRange(22,88);
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
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
