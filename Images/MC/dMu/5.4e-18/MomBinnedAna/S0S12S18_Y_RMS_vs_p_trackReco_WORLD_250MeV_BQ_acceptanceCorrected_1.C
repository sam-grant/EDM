void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3944,9.391064,3407.426,16.5415);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1212[11] = {
   451.842,
   653.3036,
   880.3415,
   1123.074,
   1371.07,
   1620.188,
   1866.988,
   2115.41,
   2363.041,
   2613.745,
   2788.124};
   Double_t Graph0_fy1212[11] = {
   13.05162,
   13.00158,
   12.94086,
   12.86087,
   12.81302,
   12.77644,
   12.74587,
   12.6883,
   12.63853,
   12.6536,
   12.64757};
   Double_t Graph0_fex1212[11] = {
   0.06806441,
   0.05746335,
   0.04161396,
   0.0406491,
   0.04340141,
   0.04801001,
   0.05599992,
   0.06963612,
   0.0900807,
   0.1102818,
   0.1342324};
   Double_t Graph0_fey1212[11] = {
   0.01902048,
   0.007670182,
   0.005324165,
   0.005136113,
   0.005465867,
   0.006038398,
   0.007035851,
   0.008705188,
   0.01123727,
   0.01416357,
   0.04063152};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1212,Graph0_fy1212,Graph0_fex1212,Graph0_fey1212);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01212 = new TH1F("Graph_Graph01212","S0S12S18_",100,218.1255,3021.906);
   Graph_Graph01212->SetMinimum(10.10611);
   Graph_Graph01212->SetMaximum(15.82646);
   Graph_Graph01212->SetDirectory(0);
   Graph_Graph01212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01212->SetLineColor(ci);
   Graph_Graph01212->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01212->GetXaxis()->SetRange(0,101);
   Graph_Graph01212->GetXaxis()->CenterTitle(true);
   Graph_Graph01212->GetXaxis()->SetLabelFont(42);
   Graph_Graph01212->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01212->GetXaxis()->SetTitleFont(42);
   Graph_Graph01212->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01212->GetYaxis()->CenterTitle(true);
   Graph_Graph01212->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01212->GetYaxis()->SetLabelFont(42);
   Graph_Graph01212->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01212->GetYaxis()->SetTitleFont(42);
   Graph_Graph01212->GetZaxis()->SetLabelFont(42);
   Graph_Graph01212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01212);
   
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
