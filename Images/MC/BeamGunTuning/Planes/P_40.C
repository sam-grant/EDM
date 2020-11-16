void P_40()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *P_40__84 = new TH1F("P_40__84","Plane 40",110,0,3300);
   P_40__84->SetBinContent(89,1);
   P_40__84->SetBinContent(90,424);
   P_40__84->SetEntries(425);
   P_40__84->SetLineWidth(3);
   P_40__84->GetXaxis()->SetTitle("Momentum [MeV]");
   P_40__84->GetXaxis()->CenterTitle(true);
   P_40__84->GetXaxis()->SetLabelFont(42);
   P_40__84->GetXaxis()->SetTitleSize(0.04);
   P_40__84->GetXaxis()->SetTitleOffset(1.1);
   P_40__84->GetXaxis()->SetTitleFont(42);
   P_40__84->GetYaxis()->SetTitle("Ghost tracks");
   P_40__84->GetYaxis()->CenterTitle(true);
   P_40__84->GetYaxis()->SetNdivisions(4000510);
   P_40__84->GetYaxis()->SetLabelFont(42);
   P_40__84->GetYaxis()->SetTitleSize(0.04);
   P_40__84->GetYaxis()->SetTitleOffset(1.1);
   P_40__84->GetYaxis()->SetTitleFont(42);
   P_40__84->GetZaxis()->SetLabelFont(42);
   P_40__84->GetZaxis()->SetTitleOffset(1);
   P_40__84->GetZaxis()->SetTitleFont(42);
   P_40__84->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
