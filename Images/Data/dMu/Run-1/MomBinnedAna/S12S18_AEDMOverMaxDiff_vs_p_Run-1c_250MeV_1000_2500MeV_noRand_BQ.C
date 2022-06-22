void S12S18_AEDMOverMaxDiff_vs_p_Run-1c_250MeV_1000_2500MeV_noRand_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 16:19:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(786.8335,0.0005571537,2714.801,0.01105998);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1115[11] = {
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
   Double_t Graph0_fy1115[11] = {
   0.006944643,
   0.004723092,
   0.002657372,
   0.002287882,
   0.002005396,
   0.003036701,
   0.00416485,
   0.003867999,
   0.003809383,
   0.008684115,
   0.01275172};
   Double_t Graph0_fex1115[11] = {
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
   Double_t Graph0_fey1115[11] = {
   0.002889701,
   0.0009337087,
   0.0005976235,
   0.0005297613,
   0.0005272653,
   0.0005832194,
   0.0007040514,
   0.0008853619,
   0.001174059,
   0.001690301,
   0.006717263};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1115,Graph0_fy1115,Graph0_fex1115,Graph0_fey1115);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01115 = new TH1F("Graph_Graph01115","S12S18",100,222.4648,3026.781);
   Graph_Graph01115->SetMinimum(0.001607436);
   Graph_Graph01115->SetMaximum(0.0100097);
   Graph_Graph01115->SetDirectory(0);
   Graph_Graph01115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01115->SetLineColor(ci);
   Graph_Graph01115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01115->GetXaxis()->SetRange(28,82);
   Graph_Graph01115->GetXaxis()->CenterTitle(true);
   Graph_Graph01115->GetXaxis()->SetLabelFont(42);
   Graph_Graph01115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01115->GetXaxis()->SetTitleFont(42);
   Graph_Graph01115->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01115->GetYaxis()->CenterTitle(true);
   Graph_Graph01115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01115->GetYaxis()->SetLabelFont(42);
   Graph_Graph01115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01115->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01115->GetYaxis()->SetTitleFont(42);
   Graph_Graph01115->GetZaxis()->SetLabelFont(42);
   Graph_Graph01115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01115);
   
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
