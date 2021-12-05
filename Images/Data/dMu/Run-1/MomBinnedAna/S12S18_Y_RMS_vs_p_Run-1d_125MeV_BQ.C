void S12S18_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:47:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8618,8.338624,3032.519,23.33414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t Graph0_fy1044[22] = {
   14.00226,
   13.34857,
   12.76628,
   12.50734,
   12.4783,
   12.45469,
   12.44573,
   12.42909,
   12.42561,
   12.44735,
   12.4423,
   12.44311,
   12.42501,
   12.38398,
   12.34877,
   12.32232,
   12.2977,
   12.30007,
   12.38562,
   12.61236,
   13.54643,
   21.80991};
   Double_t Graph0_fex1044[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t Graph0_fey1044[22] = {
   0.1782606,
   0.01719826,
   0.009382069,
   0.00634801,
   0.005033145,
   0.004500289,
   0.004286982,
   0.004154332,
   0.004184011,
   0.004256596,
   0.004551075,
   0.004827947,
   0.005415063,
   0.005946115,
   0.006752718,
   0.007482587,
   0.008633545,
   0.01043941,
   0.01249795,
   0.01549828,
   0.04546551,
   1.196974};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12S18",100,115.2023,3138.328);
   Graph_Graph01044->SetMinimum(9.838176);
   Graph_Graph01044->SetMaximum(21.83459);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(21,88);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
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
