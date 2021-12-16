void S12S18_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:18:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8618,-0.03105908,3032.519,0.2680988);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[22] = {
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
   Double_t Graph0_fy1171[22] = {
   3.639068,
   0.03973342,
   0.007566349,
   0.008195531,
   0.005987195,
   0.004204474,
   0.0028719,
   0.0008072623,
   -0.001478482,
   0.00109305,
   -0.001377175,
   2.770274e-05,
   0.0004134837,
   0.002611987,
   3.418528e-05,
   0.0008090973,
   0.003311972,
   0.003675681,
   -0.001187734,
   -0.0001136964,
   0.01950528,
   0.3376347};
   Double_t Graph0_fex1171[22] = {
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
   Double_t Graph0_fey1171[22] = {
   0.6367658,
   0.05690321,
   0.02769937,
   0.01679707,
   0.01164012,
   0.009583543,
   0.008431673,
   0.007613986,
   0.007176153,
   0.006800296,
   0.006814181,
   0.0066131,
   0.006894859,
   0.006979354,
   0.007352109,
   0.007510073,
   0.007953905,
   0.008709054,
   0.00938815,
   0.01043514,
   0.02660572,
   0.2191869};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18",100,115.2023,3138.328);
   Graph_Graph01171->SetMinimum(-0.001143287);
   Graph_Graph01171->SetMaximum(0.238183);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(21,88);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
