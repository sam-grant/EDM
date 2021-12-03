void S0S12S18_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5144,-0.0007663613,3034.923,3.204493e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[12] = {
   192.2001,
   423.448,
   631.326,
   875.8637,
   1123.741,
   1372.866,
   1621.902,
   1870.424,
   2118.826,
   2366.464,
   2613.201,
   2825.527};
   Double_t Graph0_fy1108[12] = {
   -0.002589006,
   -0.0003727173,
   -0.0004184993,
   -0.0007383003,
   -0.000659032,
   -0.0008604679,
   -0.0007036331,
   -0.0007396935,
   -0.0004726618,
   -0.0004442227,
   -0.0003723865,
   -6.105127e-05};
   Double_t Graph0_fex1108[12] = {
   0.2040654,
   0.04760665,
   0.03659771,
   0.03433945,
   0.03488441,
   0.03624002,
   0.03844086,
   0.0419287,
   0.04784871,
   0.05675261,
   0.07178417,
   0.09115639};
   Double_t Graph0_fey1108[12] = {
   -0.00232115,
   -0.0002931432,
   -0.000136501,
   -9.92448e-05,
   -8.290847e-05,
   -7.287536e-05,
   -6.690335e-05,
   -6.465958e-05,
   -6.476618e-05,
   -6.66674e-05,
   -7.292131e-05,
   -0.0001164655};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S0S12S18_",100,0,3088.981);
   Graph_Graph01108->SetMinimum(-0.0006865207);
   Graph_Graph01108->SetMaximum(-4.77957e-05);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(25,90);
   Graph_Graph01108->GetXaxis()->CenterTitle(true);
   Graph_Graph01108->GetXaxis()->SetLabelFont(42);
   Graph_Graph01108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01108->GetXaxis()->SetTitleFont(42);
   Graph_Graph01108->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01108->GetYaxis()->CenterTitle(true);
   Graph_Graph01108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01108->GetYaxis()->SetLabelFont(42);
   Graph_Graph01108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01108->GetYaxis()->SetTitleFont(42);
   Graph_Graph01108->GetZaxis()->SetLabelFont(42);
   Graph_Graph01108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01108);
   
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
