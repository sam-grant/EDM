void S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6156,-0.001316717,2723.993,0.002752162);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1054[12] = {
   172.9297,
   432.8647,
   628.4978,
   873.0147,
   1121.804,
   1371.324,
   1620.193,
   1868.223,
   2115.655,
   2363.493,
   2614.65,
   2825.258};
   Double_t Graph0_fy1054[12] = {
   -0.0001041063,
   0.0001497583,
   -3.935395e-05,
   5.305527e-05,
   -3.303656e-05,
   7.94009e-05,
   -0.0002709463,
   0.0005217406,
   -0.000209302,
   7.930306e-05,
   -9.5526e-05,
   0.0007177224};
   Double_t Graph0_fex1054[12] = {
   1.275515,
   0.1209802,
   0.1087106,
   0.1092648,
   0.1173546,
   0.1272627,
   0.1404312,
   0.1620366,
   0.195341,
   0.2531342,
   0.3251753,
   0.397035};
   Double_t Graph0_fey1054[12] = {
   -0.00276564,
   0.0001610886,
   -8.713492e-05,
   8.083534e-05,
   -0.0001124834,
   0.0001188538,
   -0.0001918445,
   0.0003830697,
   -0.0003312062,
   7.823633e-05,
   -0.0004538216,
   0.001356293};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1054,Graph0_fy1054,Graph0_fex1054,Graph0_fey1054);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01054 = new TH1F("Graph_Graph01054","S18_",100,0,3091.056);
   Graph_Graph01054->SetMinimum(-0.0009098291);
   Graph_Graph01054->SetMaximum(0.002345274);
   Graph_Graph01054->SetDirectory(0);
   Graph_Graph01054->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01054->SetLineColor(ci);
   Graph_Graph01054->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01054->GetXaxis()->SetRange(25,81);
   Graph_Graph01054->GetXaxis()->CenterTitle(true);
   Graph_Graph01054->GetXaxis()->SetLabelFont(42);
   Graph_Graph01054->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01054->GetXaxis()->SetTitleFont(42);
   Graph_Graph01054->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01054->GetYaxis()->CenterTitle(true);
   Graph_Graph01054->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01054->GetYaxis()->SetLabelFont(42);
   Graph_Graph01054->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01054->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01054->GetYaxis()->SetTitleFont(42);
   Graph_Graph01054->GetZaxis()->SetLabelFont(42);
   Graph_Graph01054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01054);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
