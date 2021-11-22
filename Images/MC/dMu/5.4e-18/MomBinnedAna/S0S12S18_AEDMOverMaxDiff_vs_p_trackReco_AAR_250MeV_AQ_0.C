void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:16:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.297,-0.0008842678,3335.911,0.001671715);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1104[12] = {
   176.0138,
   432.6504,
   628.4065,
   872.9909,
   1121.658,
   1371.497,
   1620.22,
   1868.422,
   2116.783,
   2363.589,
   2614.113,
   2827.094};
   Double_t Graph0_fy1104[12] = {
   0.0001464739,
   0.0001203017,
   0.0001813562,
   0.0002436919,
   0.0003868401,
   0.0006550265,
   0.0005022863,
   0.0008780139,
   0.0008715172,
   0.0007764144,
   0.001119265,
   0.0002163728};
   Double_t Graph0_fex1104[12] = {
   0.4267611,
   0.04058831,
   0.03658792,
   0.03685438,
   0.03950822,
   0.0427505,
   0.04710958,
   0.0538375,
   0.06397269,
   0.080697,
   0.1053756,
   0.1280656};
   Double_t Graph0_fey1104[12] = {
   0.0006047445,
   3.895722e-05,
   1.945338e-05,
   1.879792e-05,
   2.999922e-05,
   4.525676e-05,
   3.389292e-05,
   6.045672e-05,
   7.729868e-05,
   8.867164e-05,
   0.0001264525,
   4.359507e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1104,Graph0_fy1104,Graph0_fex1104,Graph0_fey1104);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01104 = new TH1F("Graph_Graph01104","S0S12S18_",100,0,3092.386);
   Graph_Graph01104->SetMinimum(-0.0006286695);
   Graph_Graph01104->SetMaximum(0.001416117);
   Graph_Graph01104->SetDirectory(0);
   Graph_Graph01104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01104->SetLineColor(ci);
   Graph_Graph01104->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01104->GetXaxis()->SetRange(2,96);
   Graph_Graph01104->GetXaxis()->CenterTitle(true);
   Graph_Graph01104->GetXaxis()->SetLabelFont(42);
   Graph_Graph01104->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01104->GetXaxis()->SetTitleFont(42);
   Graph_Graph01104->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01104->GetYaxis()->CenterTitle(true);
   Graph_Graph01104->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01104->GetYaxis()->SetLabelFont(42);
   Graph_Graph01104->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01104->GetYaxis()->SetTitleFont(42);
   Graph_Graph01104->GetZaxis()->SetLabelFont(42);
   Graph_Graph01104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01104);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
