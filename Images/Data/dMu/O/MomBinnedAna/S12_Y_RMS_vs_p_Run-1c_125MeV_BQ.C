void S12_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9382,11.04556,2731.455,18.96097);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.1537,
   457.0776,
   570.3106,
   695.1323,
   816.0343,
   938.5372,
   1062.789,
   1188.378,
   1312.629,
   1436,
   1561.908,
   1685.331,
   1810.624,
   1935.143,
   2060.277,
   2185.005,
   2309.081,
   2432.9,
   2559.578,
   2678.745,
   2780.475,
   2889.817};
   Double_t Graph0_fy1017[22] = {
   14.45002,
   13.41866,
   12.89112,
   12.58494,
   12.57785,
   12.55374,
   12.52573,
   12.50222,
   12.48836,
   12.49544,
   12.48169,
   12.48323,
   12.48004,
   12.48554,
   12.42254,
   12.39441,
   12.3825,
   12.40977,
   12.41994,
   12.5785,
   12.95389,
   15.65371};
   Double_t Graph0_fex1017[22] = {
   0.2466829,
   0.1188576,
   0.07970566,
   0.05413548,
   0.04310798,
   0.03880465,
   0.03677443,
   0.03566358,
   0.03601932,
   0.03615915,
   0.03887768,
   0.04079902,
   0.04578594,
   0.0500601,
   0.05720224,
   0.06321192,
   0.07280284,
   0.08735633,
   0.1051466,
   0.1208343,
   0.2382505,
   1.967906};
   Double_t Graph0_fey1017[22] = {
   0.405797,
   0.03747061,
   0.02052821,
   0.01365197,
   0.01072066,
   0.009538285,
   0.0090574,
   0.008779053,
   0.008790346,
   0.008903507,
   0.009504917,
   0.01004241,
   0.0111978,
   0.01230308,
   0.01391508,
   0.01539677,
   0.01770443,
   0.02133661,
   0.02567704,
   0.03177038,
   0.08829553,
   1.988023};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,114.4192,3144.273);
   Graph_Graph01017->SetMinimum(11.8371);
   Graph_Graph01017->SetMaximum(18.16943);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
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
