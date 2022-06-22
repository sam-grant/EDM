void S12S18_Momentum_Y_RMS_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.8335,10.99566,2714.801,25.89131);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[11] = {
   456.2222,
   654.8286,
   884.0846,
   1127.643,
   1373.392,
   1620.075,
   1867.005,
   2116.074,
   2359.709,
   2607.414,
   2792.927};
   Double_t Graph0_fy1111[11] = {
   14.2545,
   15.87394,
   17.12596,
   18.71065,
   19.89988,
   20.33492,
   19.87099,
   18.96997,
   17.45104,
   15.46705,
   14.81865};
   Double_t Graph0_fex1111[11] = {
   0.06434089,
   0.04499532,
   0.02990223,
   0.02707695,
   0.02661092,
   0.02940031,
   0.03568054,
   0.04489173,
   0.05869296,
   0.08142822,
   0.1617379};
   Double_t Graph0_fey1111[11] = {
   0.02064114,
   0.007414811,
   0.005117987,
   0.00495729,
   0.005247827,
   0.005932118,
   0.006995456,
   0.008394403,
   0.01023453,
   0.01307767,
   0.04730701};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12S18",100,222.4648,3026.781);
   Graph_Graph01111->SetMinimum(12.48522);
   Graph_Graph01111->SetMaximum(24.40174);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(28,82);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
